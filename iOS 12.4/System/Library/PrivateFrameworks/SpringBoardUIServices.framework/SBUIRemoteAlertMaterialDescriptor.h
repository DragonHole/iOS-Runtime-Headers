/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface SBUIRemoteAlertMaterialDescriptor : NSObject <NSSecureCoding> {

	UIColor* _color;
	double _blurRadius;
	double _zoom;

}

@property (nonatomic,copy) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double blurRadius;              //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double zoom;                    //@synthesize zoom=_zoom - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(double)blurRadius;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end
