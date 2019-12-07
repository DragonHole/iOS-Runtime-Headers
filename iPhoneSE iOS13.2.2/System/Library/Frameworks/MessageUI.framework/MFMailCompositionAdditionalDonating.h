/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MFMailCompositionAdditionalDonating
@property (nonatomic,copy) NSArray * UTITypes; 
@property (nonatomic,copy) NSArray * photoIDs; 
@property (nonatomic,copy) NSArray * cloudPhotoIDs; 
@property (nonatomic,copy) NSArray * contentText; 
@property (nonatomic,copy) NSArray * contentURLs; 
@required
-(NSArray *)contentText;
-(void)setContentText:(id)arg1;
-(NSArray *)UTITypes;
-(void)setUTITypes:(id)arg1;
-(void)setContentURLs:(id)arg1;
-(void)setPhotoIDs:(id)arg1;
-(void)setCloudPhotoIDs:(id)arg1;
-(NSArray *)photoIDs;
-(NSArray *)cloudPhotoIDs;
-(NSArray *)contentURLs;

@end
