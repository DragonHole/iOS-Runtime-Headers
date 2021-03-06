/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition {

	CGImageSourceRef _imageSource;

}

@property (readonly) CGImageSourceRef imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
-(CGImageSourceRef)imageSource;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 ;
-(id)init;
-(void)dealloc;
@end

