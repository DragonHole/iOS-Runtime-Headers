/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@class NUSourceNode;

@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode * primarySourceNode; 
+(id)sourceContainerNodeFromSource:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSettings:(id)arg1 inputs:(NSDictionary*)arg2 ;
-(id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id*)arg4 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU5*)arg2 error:(out id*)arg3 ;
-(BOOL)isEqualToRenderNode:(id)arg1 ;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(unsigned long long)_hash;
@end
