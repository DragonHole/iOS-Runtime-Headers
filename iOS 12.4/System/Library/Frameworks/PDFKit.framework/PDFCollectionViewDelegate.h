/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFCollectionViewDelegate <NSObject>
@required
-(void)didSelectItemAtIndexPath:(id)arg1;
-(id)scrubbingAtFraction:(double)arg1 betweenIndexPath:(id)arg2 andIndexPath:(id)arg3 outDiscreteFraction:(double*)arg4;
-(void)didEndDisplayingItem:(id)arg1;
-(BOOL)allowsDragging;
-(void)selectionChanged;

@end
