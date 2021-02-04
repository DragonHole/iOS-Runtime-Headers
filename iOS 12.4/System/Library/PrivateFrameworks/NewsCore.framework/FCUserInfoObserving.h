/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCUserInfoObserving <NSObject>
@optional
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeOnboardingStatus:(id)arg1;
-(void)userInfoDidChangeNotificationsUserID:(id)arg1;
-(void)userInfoDidChangeDateLastViewedSaved:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeEditorialArticleVersion:(id)arg1;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3;
-(void)userInfoDidChangeMarketingNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;
-(void)userInfoDidChangeNewIssueNotificationsEnabled:(id)arg1 fromCloud:(BOOL)arg2;

@end
