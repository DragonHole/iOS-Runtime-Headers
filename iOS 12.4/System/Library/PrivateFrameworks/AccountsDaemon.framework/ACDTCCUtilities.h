/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@interface ACDTCCUtilities : NSObject
+(CFStringRef)_TCCServiceForAccountTypeID:(id)arg1 ;
+(int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(BOOL)TCCSupportedForAccountTypeID:(id)arg1 ;
+(BOOL)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(BOOL)arg3 ;
+(BOOL)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(id)allTCCStatesForAccountTypeID:(id)arg1 ;
+(BOOL)clearAllTCCStatesForAccountTypeID:(id)arg1 ;
@end

