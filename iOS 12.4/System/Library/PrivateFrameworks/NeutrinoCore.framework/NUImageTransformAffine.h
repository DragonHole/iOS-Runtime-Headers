/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformAffine : NUImageTransform {

	CGAffineTransform _transformInv;
	CGAffineTransform _transform;

}

@property (readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
-(void)nu_updateDigest:(id)arg1 ;
-(BOOL)isEqualToGeometryTransformAffine:(id)arg1 ;
-(id)inverseTransform;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGAffineTransform)transform;
@end
