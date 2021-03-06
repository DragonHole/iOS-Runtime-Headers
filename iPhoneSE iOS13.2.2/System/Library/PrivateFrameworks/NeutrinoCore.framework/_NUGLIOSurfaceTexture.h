/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture {

	NUIOSurface* _surface;

}

@property (nonatomic,readonly) NUIOSurface * surface;              //@synthesize surface=_surface - In the implementation block
-(id)initWithIOSurface:(id)arg1 ;
-(NUIOSurface *)surface;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(BOOL)isSurface;
-(void)allocateStorage:(id)arg1 ;
@end

