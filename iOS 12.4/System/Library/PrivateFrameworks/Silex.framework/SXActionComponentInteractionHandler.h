/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXPostActionHandler.h>
#import <libobjc.A.dylib/SXComponentInteractionHandler.h>
#import <libobjc.A.dylib/SXForceTouchComponentInteractionHandler.h>

@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;
@class SXAction, NSString;

@interface SXActionComponentInteractionHandler : NSObject <SXPostActionHandler, SXComponentInteractionHandler, SXForceTouchComponentInteractionHandler> {

	SXAction* _action;
	id<SXActionManager> _actionManager;
	id<SXActionSerializer> _actionSerializer;
	id<SXAnalyticsReportingProvider> _analyticsReportingProvider;

}

@property (nonatomic,readonly) SXAction * action;                                                        //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) id<SXActionSerializer> actionSerializer;                                  //@synthesize actionSerializer=_actionSerializer - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReportingProvider> analyticsReportingProvider;              //@synthesize analyticsReportingProvider=_analyticsReportingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewViewController;
-(id<SXActionManager>)actionManager;
-(id<SXActionSerializer>)actionSerializer;
-(id<SXAnalyticsReportingProvider>)analyticsReportingProvider;
-(void)handledAction:(id)arg1 state:(unsigned long long)arg2 ;
-(void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)commitViewController:(id)arg1 ;
-(id)initWithAction:(id)arg1 actionManager:(id)arg2 actionSerializer:(id)arg3 analyticsReportingProvider:(id)arg4 ;
-(SXAction *)action;
@end

