/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(BOOL)createDirectory:(id)arg1 ;
+(id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
+(id)getDefaultLogDumpPath;
+(void)removeOldFilesInDefaultLogDumpPath;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
@end

