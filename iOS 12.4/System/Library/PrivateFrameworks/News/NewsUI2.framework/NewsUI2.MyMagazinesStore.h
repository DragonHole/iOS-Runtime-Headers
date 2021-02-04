/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>
#import <libobjc.A.dylib/FCIssueReadingHistoryObserving.h>

@interface NewsUI2.MyMagazinesStore : NSObject <FCSubscriptionObserving, FCIssueReadingHistoryObserving> {

	 state;
	 badgeIssueIDs;
	 currentIssues;
	 recentlyReadIssues;
	 downloadedIssues;
	 currentIssuesChecker;
	 issueService;
	 issueReadingHistory;
	 subscriptionController;
	 offlineIssueList;
	 offlineIssueManager;
	 paidBundleConfigManager;
	 lazyInitializingPromise.storage;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2 ;
-(id)init;
@end
