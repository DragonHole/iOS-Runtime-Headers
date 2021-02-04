/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKPlaceViewControllerDelegate <NSObject,UIScrollViewDelegate>
@optional
-(id)activityViewControllerForPlaceViewController:(id)arg1;
-(id)traitsForPlaceViewController:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3;
-(double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
-(void)placeViewController:(id)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectReroute:(id)arg2 withDecoderData:(id)arg3 withOrigin:(id)arg4;
-(void)placeViewControllerDidSelectFlyover:(id)arg1;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1;
-(void)placeViewControllerDidSelectShareLocation:(id)arg1;
-(BOOL)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
-(void)placeViewControllerDidSelectInlineMap:(id)arg1;
-(void)placeViewControllerDidSelectShowBrandCard:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedPhoneNumber:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedHomePage:(id)arg1;
-(void)placeViewControllerDidSelectOnePhoto:(id)arg1;
-(void)placeViewControllerDidSelectOneReview:(id)arg1;
-(void)placeViewControllerDidSelectWriteAReview:(id)arg1;
-(void)placeViewControllerDidSelectMoreInfo:(id)arg1;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;
-(void)placeViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(void)placeViewControllerDidDismiss:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectTransitConnectionInformation:(id)arg2;
-(void)placeViewController:(id)arg1 showTransitIncidents:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectTransitLine:(id)arg2;
-(void)placeViewController:(id)arg1 addFavoriteForPlaceItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 removeFavoriteForPlaceItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewController:(id)arg1 hasFavoriteForPlaceItem:(id)arg2 result:(/*^block*/id)arg3;
-(void)placeViewControllerDidSelectRemoveMarker:(id)arg1;
-(int)mapTypeForPlaceViewController:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectSearchCategory:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectParent:(id)arg2;
-(void)placeViewControllerDidUpdateHeight:(id)arg1;
-(void)placeViewControllerLinkedServicesDidTapHeaderButton:(id)arg1;

@end
