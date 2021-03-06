/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSTripPreviewsCardView.h>
#import <libobjc.A.dylib/CPSAlternateRouteSelecting.h>

@class CPSAlternateRoutesView, UIButton, NSString;

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting> {

	CPSAlternateRoutesView* _alternatesView;
	UIButton* _goButton;

}

@property (nonatomic,readonly) CPSAlternateRoutesView * alternatesView;              //@synthesize alternatesView=_alternatesView - In the implementation block
@property (nonatomic,readonly) UIButton * goButton;                                  //@synthesize goButton=_goButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)goButton;
-(id)_linearFocusItems;
-(void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2 ;
-(id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3 ;
-(void)setSelectedTrip:(id)arg1 ;
-(CPSAlternateRoutesView *)alternatesView;
-(id)preferredFocusEnvironments;
@end

