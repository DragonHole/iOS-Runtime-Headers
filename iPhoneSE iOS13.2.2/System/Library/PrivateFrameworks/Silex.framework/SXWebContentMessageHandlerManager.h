/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/SXWebContentMessageHandlerManager.h>

@protocol SXWebContentMessageHandlerManager <NSObject>
@required
-(void)addMessageHandler:(id)arg1 name:(id)arg2;

@end


@protocol SXWebContentLogger;
@class NSMutableDictionary, NSString;

@interface SXWebContentMessageHandlerManager : NSObject <WKScriptMessageHandler, SXWebContentMessageHandlerManager> {

	id<SXWebContentLogger> _logger;
	NSMutableDictionary* _messageHandlers;

}

@property (nonatomic,readonly) id<SXWebContentLogger> logger;                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * messageHandlers;              //@synthesize messageHandlers=_messageHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXWebContentLogger>)logger;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)addMessageHandler:(id)arg1 name:(id)arg2 ;
-(id)initWithUserContentController:(id)arg1 logger:(id)arg2 ;
-(NSMutableDictionary *)messageHandlers;
@end
