/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPChargingStatusViewHosting.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>

@class PNPChargingStatusView, PNPDeviceState, PNPPencilView, NSString;

@interface PNPPencilHorizontalPresentationContainerView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable> {

	PNPChargingStatusView* _chargingStatusView;
	BOOL _showsChargingStatusView;
	PNPDeviceState* _deviceState;
	PNPPencilView* _pencilView;

}

@property (nonatomic,retain) PNPPencilView * pencilView;                              //@synthesize pencilView=_pencilView - In the implementation block
@property (nonatomic,retain) PNPChargingStatusView * chargingStatusView;              //@synthesize chargingStatusView=_chargingStatusView - In the implementation block
@property (assign,nonatomic) BOOL showsChargingStatusView;                            //@synthesize showsChargingStatusView=_showsChargingStatusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState;                              //@synthesize deviceState=_deviceState - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(PNPDeviceState *)deviceState;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(PNPPencilView *)pencilView;
-(void)setPencilView:(PNPPencilView *)arg1 ;
-(void)setChargingStatusView:(PNPChargingStatusView *)arg1 ;
-(void)setShowsChargingStatusView:(BOOL)arg1 ;
-(BOOL)showsChargingStatusView;
-(PNPChargingStatusView *)chargingStatusView;
@end
