/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <libobjc.A.dylib/NUIArrangementItem.h>

@class NSString;

@interface TLKArrangementItem : NSObject <NUIArrangementItem> {

	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(float)contentCompressionResistancePriorityForAxis:(long long)arg1 ;
-(float)contentHuggingPriorityForAxis:(long long)arg1 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(double)effectiveBaselineOffsetFromContentBottom;
-(double)effectiveFirstBaselineOffsetFromContentTop;
@end

