/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class DOCLargeTagView, DOCTag;

@interface DOCTagEditorTagCell : UICollectionViewCell {

	BOOL _mixedSelection;
	DOCLargeTagView* _tagView;

}

@property (nonatomic,retain) DOCLargeTagView * tagView;              //@synthesize tagView=_tagView - In the implementation block
@property (nonatomic,retain) DOCTag * tagValue; 
@property (assign,nonatomic) BOOL mixedSelection;                    //@synthesize mixedSelection=_mixedSelection - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateStyle;
-(void)setTagView:(DOCLargeTagView *)arg1 ;
-(DOCLargeTagView *)tagView;
-(void)setTagValue:(DOCTag *)arg1 ;
-(DOCTag *)tagValue;
-(BOOL)mixedSelection;
-(void)setMixedSelection:(BOOL)arg1 ;
@end
