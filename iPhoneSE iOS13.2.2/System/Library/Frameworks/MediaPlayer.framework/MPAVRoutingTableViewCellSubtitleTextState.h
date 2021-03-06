/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject {

	BOOL _animating;
	NSString* _routeUID;
	NSString* _batteryText;
	NSString* _pairedDeviceText;
	NSString* _localizedSubtitle;
	unsigned long long _currentVisibleTextType;

}

@property (assign,nonatomic) unsigned long long currentVisibleTextType;                      //@synthesize currentVisibleTextType=_currentVisibleTextType - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleTextTypeToShow; 
@property (nonatomic,readonly) BOOL hasVisibleTextTypeToTransitionTo; 
@property (nonatomic,copy,readonly) NSString * stringForCurrentVisibleTextType; 
@property (nonatomic,copy) NSString * routeUID;                                              //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * batteryText;                                           //@synthesize batteryText=_batteryText - In the implementation block
@property (nonatomic,copy) NSString * pairedDeviceText;                                      //@synthesize pairedDeviceText=_pairedDeviceText - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                              //@synthesize animating=_animating - In the implementation block
-(BOOL)isAnimating;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)hasVisibleTextTypeToShow;
-(BOOL)hasVisibleTextTypeToTransitionTo;
-(void)transitionToNextAvailableVisibleTextType;
-(NSString *)stringForCurrentVisibleTextType;
-(id)_stringForVisibleTextType:(unsigned long long)arg1 ;
-(unsigned long long)_nextAvailableVisibleTextType;
-(void)resetForNewRoute;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(NSString *)batteryText;
-(void)setBatteryText:(NSString *)arg1 ;
-(NSString *)pairedDeviceText;
-(void)setPairedDeviceText:(NSString *)arg1 ;
-(unsigned long long)currentVisibleTextType;
-(void)setCurrentVisibleTextType:(unsigned long long)arg1 ;
@end

