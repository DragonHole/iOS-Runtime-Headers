/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (assign,nonatomic) double lineSpacing; 
@property (assign,nonatomic) double paragraphSpacing; 
@property (assign,nonatomic) long long alignment; 
@property (assign,nonatomic) double firstLineHeadIndent; 
@property (assign,nonatomic) double headIndent; 
@property (assign,nonatomic) double tailIndent; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double minimumLineHeight; 
@property (assign,nonatomic) double maximumLineHeight; 
@property (assign,nonatomic) long long baseWritingDirection; 
@property (assign,nonatomic) double lineHeightMultiple; 
@property (assign,nonatomic) double paragraphSpacingBefore; 
@property (assign,nonatomic) float hyphenationFactor; 
@property (nonatomic,copy) NSArray * tabStops; 
@property (assign,nonatomic) double defaultTabInterval; 
@property (assign,nonatomic) BOOL allowsDefaultTighteningForTruncation; 
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(void)setTighteningFactorForTruncation:(float)arg1 ;
-(void)setHeaderLevel:(long long)arg1 ;
-(void)_mutateTabStops;
-(void)setAllowsHangingPunctuation:(BOOL)arg1 ;
-(void)setUsesOpticalAlignment:(BOOL)arg1 ;
-(void)addTabStop:(id)arg1 ;
-(void)removeTabStop:(id)arg1 ;
-(void)_setLineBoundsOptions:(unsigned long long)arg1 ;
-(void)setParagraphSpacing:(double)arg1 ;
-(void)setHeadIndent:(double)arg1 ;
-(void)setParagraphSpacingBefore:(double)arg1 ;
-(void)setTabStops:(NSArray *)arg1 ;
-(void)setLineHeightMultiple:(double)arg1 ;
-(void)setTailIndent:(double)arg1 ;
-(void)setDefaultTabInterval:(double)arg1 ;
-(void)setParagraphStyle:(id)arg1 ;
-(void)setTextLists:(id)arg1 ;
-(void)setTextBlocks:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setAllowsDefaultTighteningForTruncation:(BOOL)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(void)setMaximumLineHeight:(double)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setFirstLineHeadIndent:(double)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
@end
