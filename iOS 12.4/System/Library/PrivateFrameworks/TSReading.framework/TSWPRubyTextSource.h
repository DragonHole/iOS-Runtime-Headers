/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextSource.h>

@protocol TSWPTextSource;
@class TSWPRangeMap, NSString;

@interface TSWPRubyTextSource : NSObject <TSWPTextSource> {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _spaceCharIndexes;
	vector<unsigned long, std::__1::allocator<unsigned long> >* _bidiCharIndexes;
	id<TSWPTextSource> _source;
	TSWPRangeMap* _rangeMap;
	unsigned long long _length;
	unsigned long long _storageLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(unsigned)composedCharacterAtCharIndex:(unsigned long long)arg1 isSurrogatePair:(BOOL*)arg2 ;
-(unsigned long long)storageLength;
-(BOOL)adjustRangesByDelta:(long long)arg1 ;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(double)filteredCoreTextAttributesFontScaleEffectiveRange:(NSRange*)arg1 filterDelegate:(id)arg2 ;
-(CFDictionaryRef)createFilteredCoreTextAttributes:(CFDictionaryRef)arg1 effectiveRange:(NSRange*)arg2 filterDelegate:(id)arg3 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)smartFieldsWithAttributeKind:(unsigned)arg1 intersectingRange:(NSRange)arg2 ;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentAtCharIndex:(unsigned long long)arg1 ;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1 ;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4 ;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1 ;
-(id)initWithSource:(id)arg1 subRange:(NSRange)arg2 ;
-(unsigned long long)length;
-(void)dealloc;
-(id)string;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end
