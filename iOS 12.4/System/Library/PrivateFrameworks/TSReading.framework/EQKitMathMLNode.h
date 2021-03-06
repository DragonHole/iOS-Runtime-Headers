/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutNode.h>

@protocol EQKitLayoutNode;
@class NSString;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode> {

	id<EQKitLayoutNode> mParent;

}

@property (assign,nonatomic) id<EQKitLayoutNode> parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(BOOL)isNumber;
-(BOOL)isSpaceLike;
-(id)layoutStyleNode;
-(BOOL)isEmbellishedOperator;
-(id)operatorCore;
-(BOOL)isAttributeDefaultInheritableFromStyle:(int)arg1 ;
-(void)setParent:(id<EQKitLayoutNode>)arg1 ;
-(long long)scriptLevelWithBase:(long long)arg1 ;
-(id<EQKitLayoutNode>)parent;
@end

