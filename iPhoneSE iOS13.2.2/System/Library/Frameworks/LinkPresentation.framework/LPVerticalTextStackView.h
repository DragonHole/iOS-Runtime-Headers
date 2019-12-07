/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class NSMutableArray, LPVerticalTextStackViewStyle;

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable> {

	NSMutableArray* _items;
	BOOL _hasEverBuilt;
	UIEdgeInsets _contentInset;
	LPVerticalTextStackViewStyle* _style;

}
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(CGSize)_layoutTextStackForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
@end
