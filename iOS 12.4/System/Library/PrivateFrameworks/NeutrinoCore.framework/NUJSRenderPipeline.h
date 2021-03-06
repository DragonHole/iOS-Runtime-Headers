/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderPipeline.h>

@class NUScript, NSUUID;

@interface NUJSRenderPipeline : NURenderPipeline {

	NUScript* _script;
	NSUUID* _identifier;

}
+(id)extractFilterParams:(id)arg1 withPipelineState:(id)arg2 error:(out id*)arg3 ;
+(id)renderPipelineWithJavaScript:(id)arg1 ;
+(NSDictionary*)extractTransforms:(id)arg1 inputImages:(id)arg2 error:(out id*)arg3 ;
-(id)initWithScript:(id)arg1 ;
-(id)_pipelineFunctionWithJavaScript:(id)arg1 sourceURL:(id)arg2 context:(id)arg3 ;
-(id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 context:(id)arg4 error:(out id*)arg5 ;
-(void)setUpContext:(id)arg1 ;
-(id)_pipelineFunctionInContext:(id)arg1 error:(out id*)arg2 ;
-(id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)init;
@end

