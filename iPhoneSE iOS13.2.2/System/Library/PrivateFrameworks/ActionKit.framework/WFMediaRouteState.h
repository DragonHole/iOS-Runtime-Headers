/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class MPAVRoute;

@interface WFMediaRouteState : WFVariableSubstitutableParameterState {

	MPAVRoute* _route;

}

@property (nonatomic,readonly) MPAVRoute * route;              //@synthesize route=_route - In the implementation block
+(Class)processingValueClass;
+(id)serializedRepresentationFromValue:(id)arg1 ;
+(id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(MPAVRoute *)route;
-(id)initWithRoute:(id)arg1 ;
@end
