/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageRepository.h>

@class EMFakeRepositoryValidityTracker;

@interface EMFakeMessageRepository : EMMessageRepository {

	EMFakeRepositoryValidityTracker* _validityTracker;

}
-(void)performMessageChangeAction:(id)arg1 ;
-(void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRemoteConnection:(id)arg1 mailboxRepository:(id)arg2 vipManager:(id)arg3 blockedSenderManager:(id)arg4 ;
-(void)verifyExpectations;
-(void)expectChangeActionWithValidationBlock:(/*^block*/id)arg1 ;
-(id)messageListItemsForObjectIDs:(id)arg1 ;
@end

