/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardSectionViewControllerDelegate <CRFeedbackListener>
@optional
-(BOOL)canPerformCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(BOOL)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewControllerDidFinishLoading:(id)arg1;
-(long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
-(void)cardSectionViewControllerBoundsDidChange:(id)arg1;
-(void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
-(void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
-(CGSize*)boundingSizeForCardSectionViewController:(id)arg1;

@end

