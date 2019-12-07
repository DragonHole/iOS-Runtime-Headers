/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDocumentStyle.h>

@protocol SXDocumentStyle <SXDocumentStyleProperties,SXConditionalObject>
@end


@class NSString, UIColor, SXJSONLinearGradient, SXJSONArray;

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) SXJSONLinearGradient * topBackgroundGradient; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(UIColor *)backgroundColor;
-(SXJSONLinearGradient *)topBackgroundGradient;
-(UIColor *)topBackgroundColor;
@end
