/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFItem, HUElasticApplier, NSTimer;

@interface HUPressedItemContext : NSObject {

	BOOL _active;
	BOOL _isUserInitiated;
	HFItem* _item;
	HUElasticApplier* _applier;
	double _beginTime;
	double _rawInputProgress;
	double _currentViewScale;
	NSTimer* _programmaticBounceTimer;

}

@property (nonatomic,retain) HFItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) HUElasticApplier * applier;                     //@synthesize applier=_applier - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double beginTime;                               //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double rawInputProgress;                        //@synthesize rawInputProgress=_rawInputProgress - In the implementation block
@property (assign,nonatomic) double currentViewScale;                        //@synthesize currentViewScale=_currentViewScale - In the implementation block
@property (assign,nonatomic) BOOL isUserInitiated;                           //@synthesize isUserInitiated=_isUserInitiated - In the implementation block
@property (nonatomic,retain) NSTimer * programmaticBounceTimer;              //@synthesize programmaticBounceTimer=_programmaticBounceTimer - In the implementation block
-(HUElasticApplier *)applier;
-(void)setApplier:(HUElasticApplier *)arg1 ;
-(double)rawInputProgress;
-(void)setRawInputProgress:(double)arg1 ;
-(void)setCurrentViewScale:(double)arg1 ;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(NSTimer *)programmaticBounceTimer;
-(void)setProgrammaticBounceTimer:(NSTimer *)arg1 ;
-(double)currentViewScale;
-(BOOL)isUserInitiated;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
@end
