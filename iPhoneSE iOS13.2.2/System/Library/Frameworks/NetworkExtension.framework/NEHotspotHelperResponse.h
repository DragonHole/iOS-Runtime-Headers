/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(id)description;
-(CNPluginResponseRef)response;
-(void)setNetwork:(id)arg1 ;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetworkList:(id)arg1 ;
-(void)deliver;
@end
