/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

@interface _TVTintedImageDecorator : TVImageScaleDecorator {

	IKColor* _tintColor;

}

@property (nonatomic,retain,readonly) IKColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)drawInContext:(id)arg1 imageRect:(CGRect)arg2 ;
-(id)decoratorIdentifier;
-(id)initWithTintColor:(id)arg1 ;
-(IKColor *)tintColor;
@end

