/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {

	BOOL mFloating;
	BOOL mIsMapped;
	BOOL mIsInsideGroup;
	WDAContent* mContent;
	unsigned mCurrentPage;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 parent:(id)arg3 ;
-(void)setBoundingBox;
-(void)setWithClientData:(id)arg1 state:(id)arg2 ;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2 ;
-(BOOL)isInsideGroup;
-(void)setIsInsideGroup:(BOOL)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)expandedSizeForTextBox:(id)arg1 withState:(id)arg2 ;
-(void)setCurrentPage:(unsigned)arg1 ;
@end

