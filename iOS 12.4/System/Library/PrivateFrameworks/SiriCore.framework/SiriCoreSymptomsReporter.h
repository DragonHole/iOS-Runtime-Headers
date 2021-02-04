/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreSymptomsReporter : NSObject
+(id)sharedInstance;
-(id)_processNameForPid:(int)arg1 ;
-(void)_getTypeForError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_subtypeContextStringFromContext:(id)arg1 ;
-(void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 ;
-(void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 ;
@end
