/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFVolumeButtonManager : NSObject {

	/*^block*/id _pressHandler;

}

@property (nonatomic,copy) id pressHandler;              //@synthesize pressHandler=_pressHandler - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithView:(id)arg1 pressHandler:(/*^block*/id)arg2 ;
-(id)pressHandler;
-(void)setPressHandler:(id)arg1 ;
@end

