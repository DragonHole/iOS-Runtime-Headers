/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, NSString;

@interface MPAVAirPlayMirroringModule : NSObject <CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
@end

