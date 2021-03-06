/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPCloudSynchronizerDelegate <NSObject>
@required
-(id)storedUserIdentityForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 storeNewUserIdentity:(id)arg2;
-(id)storedClientRegistrationIdentifierForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 storeNewClientRegistrationIdentifier:(id)arg2;
-(id)storedBoostDateForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 storeNewBoostDate:(id)arg2;
-(void)synchronizer:(id)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
-(id)taskToMergeLocalAndCloudStoresForSynchronizer:(id)arg1;
-(id)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 didFailAttemptingTask:(id)arg2 withError:(id)arg3 reattemptingAfterDate:(id)arg4;

@end

