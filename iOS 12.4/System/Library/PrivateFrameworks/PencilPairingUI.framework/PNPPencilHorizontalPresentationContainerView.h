/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(PNPPencilView *)pencilView;
-(void)setPencilView:(PNPPencilView *)arg1 ;
-(void)setChargingStatusView:(PNPChargingStatusView *)arg1 ;
-(void)setShowsChargingStatusView:(BOOL)arg1 ;
-(BOOL)showsChargingStatusView;
-(PNPChargingStatusView *)chargingStatusView;
-(PNPDeviceState *)deviceState;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end
