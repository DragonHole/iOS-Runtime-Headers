/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLIndirectRenderCommandSPI <MTLIndirectRenderCommand>
@required
-(void*)getVertexBufferAtIndex:(unsigned long long)arg1;
-(void*)getFragmentBufferAtIndex:(unsigned long long)arg1;
-(unsigned long long)getCommandType;
-(id)drawArguments;
-(id)drawIndexedArguments;
-(id)drawPatchesArguments;
-(id)drawIndexedPatchesArguments;
-(id)getTessellationFactorArguments;
-(unsigned long long)getPipelineStateUniqueIdentifier;

@end
