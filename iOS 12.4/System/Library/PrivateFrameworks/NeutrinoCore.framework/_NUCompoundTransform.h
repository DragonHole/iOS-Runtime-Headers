/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@class NSArray;

@interface _NUCompoundTransform : NUImageTransform {

	NSArray* _transforms;

}
-(id)initWithTransforms:(id)arg1 ;
-(id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2 ;
-(id)inverseTransform;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)description;
@end
