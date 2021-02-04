/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class CPTrip, UILabel, CPSHidingLabel, NSString, CPTravelEstimates, CPSRouteEstimatesView;

@interface CPSRouteOverviewView : UIView {

	CPTrip* _representedTrip;
	UILabel* _destinationName;
	CPSHidingLabel* _destinationAddress;
	CPSHidingLabel* _routeNoteLabel;
	NSString* _routeNote;
	CPTravelEstimates* _currentTravelEstimates;
	CPSRouteEstimatesView* _estimatesView;

}

@property (nonatomic,readonly) CPTrip * representedTrip;                              //@synthesize representedTrip=_representedTrip - In the implementation block
@property (nonatomic,readonly) UILabel * destinationName;                             //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) CPSHidingLabel * destinationAddress;                   //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,readonly) CPSHidingLabel * routeNoteLabel;                       //@synthesize routeNoteLabel=_routeNoteLabel - In the implementation block
@property (nonatomic,copy) NSString * routeNote;                                      //@synthesize routeNote=_routeNote - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * currentTravelEstimates;              //@synthesize currentTravelEstimates=_currentTravelEstimates - In the implementation block
@property (nonatomic,readonly) CPSRouteEstimatesView * estimatesView;                 //@synthesize estimatesView=_estimatesView - In the implementation block
+(id)_multilineLabel;
+(id)_nameForMapItem:(id)arg1 ;
+(void)_applyBoldText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4 ;
+(id)_shortenedAddressForAddress:(id)arg1 ;
+(void)_applyText:(id)arg1 fontSize:(double)arg2 color:(id)arg3 toLabel:(id)arg4 ;
-(UILabel *)destinationName;
-(CPSHidingLabel *)destinationAddress;
-(CPSHidingLabel *)routeNoteLabel;
-(CPTrip *)representedTrip;
-(CPSRouteEstimatesView *)estimatesView;
-(void)setRepresentedTrip:(CPTrip *)arg1 ;
-(void)setRouteNote:(NSString *)arg1 ;
-(void)setCurrentTravelEstimates:(CPTravelEstimates *)arg1 ;
-(NSString *)routeNote;
-(CPTravelEstimates *)currentTravelEstimates;
-(id)initWithFrame:(CGRect)arg1 ;
@end
