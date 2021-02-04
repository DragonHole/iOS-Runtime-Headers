/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKUIAccountErrorDisplayer : NSObject
+(unsigned long long)severityForError:(unsigned long long)arg1 ;
+(BOOL)_reauthorizeForAccount:(id)arg1 usingViewController:(id)arg2 ;
+(void)presentAlertForAccount:(id)arg1 error:(unsigned long long)arg2 usingViewController:(id)arg3 ;
+(unsigned long long)moreSevereErrorOfError:(unsigned long long)arg1 andError:(unsigned long long)arg2 ;
+(void)presentAlertForOfflineErrorUsingViewController:(id)arg1 ;
+(BOOL)errorIsActionable:(unsigned long long)arg1 ;
@end
