/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADTextClient.h>

@class EDSheet, EDAnchor, EDTextBox, EDComment, NSMutableDictionary, NSString;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {

	EDSheet* mSheet;
	id mClientState;
	EDAnchor* mAnchor;
	EDTextBox* mTextBox;
	EDComment* mComment;
	NSMutableDictionary* mTableModels;
	CGRect mBounds;
	BOOL mIsBoundsSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasBounds;
-(void)setComment:(id)arg1 ;
-(id)comment;
-(id)textBox;
-(BOOL)areBoundsSet;
-(void)setSheet:(id)arg1 ;
-(id)clientState;
-(void)setClientState:(id)arg1 ;
-(id)sheet;
-(id)tableModels;
-(void)setTableModels:(id)arg1 ;
-(void)setTextBox:(id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(NSString *)description;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)hasText;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
@end
