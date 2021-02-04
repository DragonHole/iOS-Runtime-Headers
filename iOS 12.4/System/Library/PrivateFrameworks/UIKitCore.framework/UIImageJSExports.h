/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TMLRect, NSString;


@protocol UIImageJSExports <JSExport>
@property (nonatomic,readonly) TMLRect * bounds; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,copy) NSString * accessibilityLabel; 
@property (nonatomic,copy) NSString * accessibilityHint; 
@property (nonatomic,copy) NSString * accessibilityValue; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (nonatomic,retain) NSString * accessibilityLanguage; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) id CGImageRef; 
@required
-(double)aspectRatio;
-(id)CGImageRef;
-(id)withRenderingMode:(long long)arg1;
-(id)colorPattern;
-(id)resizableImage:(id)arg1 :(long long)arg2;
-(TMLRect *)bounds;
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(NSString *)accessibilityLanguage;
-(void)setAccessibilityLabel:(id)arg1;
-(void)setAccessibilityValue:(id)arg1;
-(void)setAccessibilityHint:(id)arg1;
-(void)setAccessibilityTraits:(unsigned long long)arg1;
-(void)setAccessibilityLanguage:(id)arg1;
-(double)scale;

@end
