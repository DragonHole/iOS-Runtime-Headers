/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CXNamespace;

@interface OCXState : NSObject {

	int mXMLFormat;
	CXNamespace* mOCXRelationshipsNamespace;
	CXNamespace* mOCXDrawingNamespace;

}

@property (nonatomic,readonly) int xmlFormat; 
@property (nonatomic,retain) CXNamespace * OCXRelationshipsNamespace; 
@property (nonatomic,retain) CXNamespace * OCXDrawingNamespace; 
-(int)xmlFormat;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)OCXThemeRelationshipType;
-(void)setOCXRelationshipsNamespace:(CXNamespace *)arg1 ;
-(void)setOCXDrawingNamespace:(CXNamespace *)arg1 ;
-(id)OCXStylesRelationshipType;
-(id)OCXSharedStringsRelationshipType;
-(id)OCXDrawingRelationshipType;
-(id)OCXEndnotesRelationshipType;
-(id)OCXFontTableRelationshipType;
-(id)OCXFootnotesRelationshipType;
-(id)OCXCommentsRelationshipType;
-(id)OCXPivotTableRelationshipType;
-(id)OCXTableRelationshipType;
-(id)OCXSlideMasterRelationshipType;
-(id)OCXSlideLayoutRelationshipType;
-(id)OCXSlideRelationshipType;
-(id)OCXNotesSlideRelationshipType;
-(id)OCXCommentAuthorsRelationshipType;
-(id)OCXCustomXmlRelationshipType;
-(id)OCXLegacyDocTextInfoRelationshipType;
-(id)OCXThemeOverrideRelationshipType;
-(id)OCXVmlDrawingRelationshipType;
-(id)OCXNotesMasterRelationshipType;
-(id)OCXNumberingRelationshipType;
-(id)OCXPackagePresPropsRelationshipType;
-(id)OCXPackageViewPropsRelationshipType;
-(id)OCXTableStylesRelationshipType;
-(id)OCXSettingsRelationshipType;
-(CXNamespace *)OCXRelationshipsNamespace;
-(CXNamespace *)OCXDrawingNamespace;
-(void)setXmlFormat:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end

