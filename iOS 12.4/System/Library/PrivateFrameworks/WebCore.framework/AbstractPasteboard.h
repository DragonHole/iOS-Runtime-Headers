/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol AbstractPasteboard <NSObject>
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,copy) NSArray * itemProviders; 
@property (nonatomic,readonly) long long numberOfFiles; 
@property (nonatomic,readonly) NSArray * allDroppedFileURLs; 
@optional
-(id)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
-(long long)numberOfFiles;
-(id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id*)arg2;
-(void)updateSupportedTypeIdentifiers:(id)arg1;
-(NSArray *)allDroppedFileURLs;
-(void)stageRegistrationList:(id)arg1;
-(void)setItems:(id)arg1;
-(id)takeRegistrationList;

@required
-(long long)numberOfItems;
-(long long)changeCount;
-(id)pasteboardTypes;
-(id)dataForPasteboardType:(id)arg1;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
-(void)setItemProviders:(id)arg1;
-(NSArray *)itemProviders;

@end

