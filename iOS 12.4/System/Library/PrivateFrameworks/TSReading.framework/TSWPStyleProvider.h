/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL supportsBoldItalicUnderlineShortcuts; 
@optional
-(unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
-(id)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1;
-(id)listStyleAtParIndex:(unsigned long long)arg1;
-(id)coreTextPropertiesFilterDelegateAtParIndex:(unsigned long long)arg1;
-(unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(SCD_Struct_TS129*)arg2;
-(id)modifiedCharacterStyle:(id)arg1 atCharIndex:(unsigned long long)arg2;
-(BOOL)supportsBoldItalicUnderlineShortcuts;

@required
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2;

@end

