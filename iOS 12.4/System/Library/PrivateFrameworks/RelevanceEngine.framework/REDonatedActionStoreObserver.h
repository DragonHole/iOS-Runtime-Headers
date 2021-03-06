/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REDonatedActionStoreObserver <NSObject>
@optional
-(void)donationActionStoreWillBeginLoadingData;
-(void)donationActionStoreDidFinishLoadingData;
-(void)donationActionStoreRemovedDonation:(id)arg1;
-(void)donationActionStoreRemoveAllDonations;

@required
-(void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(BOOL)arg2;

@end

