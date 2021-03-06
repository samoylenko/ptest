IF EXISTS (SELECT name FROM master.dbo.sysdatabases WHERE name = N'ptestdb')
	DROP DATABASE [ptestdb]
GO

CREATE DATABASE [ptestdb]  ON (NAME = N'ptestdb_Data', FILENAME = N'D:\MSSQL\data\ptestdb_Data.MDF' , SIZE = 1, FILEGROWTH = 10%) LOG ON (NAME = N'ptestdb_Log', FILENAME = N'D:\MSSQL\data\ptestdb_Log.LDF' , SIZE = 1, FILEGROWTH = 10%)
 COLLATE Cyrillic_General_CI_AS
GO

exec sp_dboption N'ptestdb', N'autoclose', N'false'
GO

exec sp_dboption N'ptestdb', N'bulkcopy', N'false'
GO

exec sp_dboption N'ptestdb', N'trunc. log', N'false'
GO

exec sp_dboption N'ptestdb', N'torn page detection', N'true'
GO

exec sp_dboption N'ptestdb', N'read only', N'false'
GO

exec sp_dboption N'ptestdb', N'dbo use', N'false'
GO

exec sp_dboption N'ptestdb', N'single', N'false'
GO

exec sp_dboption N'ptestdb', N'autoshrink', N'false'
GO

exec sp_dboption N'ptestdb', N'ANSI null default', N'false'
GO

exec sp_dboption N'ptestdb', N'recursive triggers', N'false'
GO

exec sp_dboption N'ptestdb', N'ANSI nulls', N'false'
GO

exec sp_dboption N'ptestdb', N'concat null yields null', N'false'
GO

exec sp_dboption N'ptestdb', N'cursor close on commit', N'false'
GO

exec sp_dboption N'ptestdb', N'default to local cursor', N'false'
GO

exec sp_dboption N'ptestdb', N'quoted identifier', N'false'
GO

exec sp_dboption N'ptestdb', N'ANSI warnings', N'false'
GO

exec sp_dboption N'ptestdb', N'auto create statistics', N'true'
GO

exec sp_dboption N'ptestdb', N'auto update statistics', N'true'
GO

use [ptestdb]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[ALLSTUDENTS]') and OBJECTPROPERTY(id, N'IsView') = 1)
drop view [dbo].[ALLSTUDENTS]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[BEST_PERCENT]') and OBJECTPROPERTY(id, N'IsView') = 1)
drop view [dbo].[BEST_PERCENT]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[ASK]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[ASK]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[DISCIPLINES]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[DISCIPLINES]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[GROUPS]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[GROUPS]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[JOURNAL]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[JOURNAL]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[ONLINE]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[ONLINE]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[PERMISSON]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[PERMISSON]
GO

if exists (select * from dbo.sysobjects where id = object_id(N'[dbo].[STUDENTS]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[STUDENTS]
GO

CREATE TABLE [dbo].[ASK] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[DISCIPLINE] [int] NULL ,
	[QUESTION] [text] COLLATE Cyrillic_General_CI_AS NULL ,
	[ANSW_RT] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[ANSWER1] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[ANSWER2] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[ANSWER3] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[ANSWER4] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL 
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO

CREATE TABLE [dbo].[DISCIPLINES] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[NAME] [varchar] (256) COLLATE Cyrillic_General_CI_AS NOT NULL ,
	[ENABLED] [bit] NOT NULL 
) ON [PRIMARY]
GO

CREATE TABLE [dbo].[GROUPS] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[NAME] [varchar] (256) COLLATE Cyrillic_General_CI_AS NOT NULL 
) ON [PRIMARY]
GO

CREATE TABLE [dbo].[JOURNAL] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[NAME] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[DISCIPLINE] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[GROUP] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[PERCENT] [float] NULL ,
	[TIME] [int] NULL ,
	[DATETIME] [datetime] NULL ,
	[LOG] [text] COLLATE Cyrillic_General_CI_AS NULL ,
	[LOG2] [text] COLLATE Cyrillic_General_CI_AS NULL 
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO

CREATE TABLE [dbo].[ONLINE] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[NAME] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL 
) ON [PRIMARY]
GO

CREATE TABLE [dbo].[PERMISSON] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[PERMISSION] [bit] NULL ,
	[GROUP] [int] NULL 
) ON [PRIMARY]
GO

CREATE TABLE [dbo].[STUDENTS] (
	[ID] [int] IDENTITY (1, 1) NOT NULL ,
	[NAME] [varchar] (256) COLLATE Cyrillic_General_CI_AS NULL ,
	[GROUP] [int] NULL 
) ON [PRIMARY]
GO

SET QUOTED_IDENTIFIER ON 
GO
SET ANSI_NULLS ON 
GO

/****** Object:  View dbo.ALLSTUDENTS    Script Date: 16.05.2002 12:23:53 ******/
CREATE VIEW dbo.ALLSTUDENTS
AS
SELECT     dbo.STUDENTS.ID, dbo.GROUPS.ID AS [GROUP], dbo.STUDENTS.NAME, dbo.GROUPS.NAME AS KURS
FROM         dbo.STUDENTS INNER JOIN
                      dbo.GROUPS ON dbo.STUDENTS.[GROUP] = dbo.GROUPS.ID
GO
SET QUOTED_IDENTIFIER OFF 
GO
SET ANSI_NULLS ON 
GO

SET QUOTED_IDENTIFIER ON 
GO
SET ANSI_NULLS ON 
GO

CREATE VIEW dbo.BEST_PERCENT
AS
SELECT     TOP 100 PERCENT NAME, [PERCENT]
FROM         dbo.JOURNAL
ORDER BY [PERCENT] DESC
GO
SET QUOTED_IDENTIFIER OFF 
GO
SET ANSI_NULLS ON 
GO

