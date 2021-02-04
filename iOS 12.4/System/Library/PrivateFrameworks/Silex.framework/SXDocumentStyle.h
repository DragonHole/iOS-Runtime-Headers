/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDocumentStyle.h>
@class UIColor, SXJSONLinearGradient, SXFill;


@protocol SXDocumentStyle <NSObject>
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) SXJSONLinearGradient * topBackgroundGradient; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXFill * fill; 
@required
-(UIColor *)topBackgroundColor;
-(SXJSONLinearGradient *)topBackgroundGradient;
-(UIColor *)backgroundColor;
-(SXFill *)fill;

@end


@class UIColor, SXJSONLinearGradient, SXFill, NSString;

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) SXJSONLinearGradient * topBackgroundGradient; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXFill * fill; 
-(SXFill *)fill;
-(UIColor *)backgroundColor;
-(SXJSONLinearGradient *)topBackgroundGradient;
-(UIColor *)topBackgroundColor;
-(id)fillWithValue:(id)arg1 withType:(int)arg2 ;
@end
