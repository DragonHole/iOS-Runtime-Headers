/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSIQueryDelegate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PSIParse, NSArray, NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSSet;

@interface PSIQuery : NSObject {

	id<PSIQueryDelegate> _delegate;
	PSIParse* _baseParse;
	BOOL _baseParseCouldHaveResults;
	NSArray* _datedParses;
	NSArray* _wordEmbeddingParses;
	NSArray* _identifierTokens;
	NSMutableDictionary* _groupIdsByTokenKey;
	NSDictionary* _substitutionsByStringToken;
	AB _didStart;
	AB _isCanceled;
	NSMutableSet* _socialGroupExtendedAssetIds;
	NSMutableSet* _socialGroupExtendedCollectionIds;
	NSMutableSet* _socialGroupExtendedTripIds;
	BOOL _usesPrefixBasedWordEmbedding;
	BOOL _calculateTokenCounts;
	BOOL _useWildcardText;
	NSArray* _queryTokens;
	NSString* _searchText;
	unsigned long long _wordEmbeddingMode;
	NSDictionary* _substitutions;
	unsigned long long _numberOfNextKeywordSuggestionToProcess;
	NSArray* _nextKeywordSuggestions;
	NSArray* _dedupedGroupResults;

}

@property (nonatomic,readonly) BOOL useWildcardText;                                                 //@synthesize useWildcardText=_useWildcardText - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                                           //@synthesize substitutions=_substitutions - In the implementation block
@property (nonatomic,retain) NSArray * nextKeywordSuggestions;                                       //@synthesize nextKeywordSuggestions=_nextKeywordSuggestions - In the implementation block
@property (nonatomic,copy) NSArray * dedupedGroupResults;                                            //@synthesize dedupedGroupResults=_dedupedGroupResults - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedAssetIds;                                      //@synthesize socialGroupExtendedAssetIds=_socialGroupExtendedAssetIds - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedCollectionIds;                                 //@synthesize socialGroupExtendedCollectionIds=_socialGroupExtendedCollectionIds - In the implementation block
@property (nonatomic,copy) NSSet * socialGroupExtendedTripIds;                                       //@synthesize socialGroupExtendedTripIds=_socialGroupExtendedTripIds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * queryTokens;                                           //@synthesize queryTokens=_queryTokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchText;                                           //@synthesize searchText=_searchText - In the implementation block
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic) unsigned long long wordEmbeddingMode;                                   //@synthesize wordEmbeddingMode=_wordEmbeddingMode - In the implementation block
@property (assign,nonatomic) BOOL usesPrefixBasedWordEmbedding;                                      //@synthesize usesPrefixBasedWordEmbedding=_usesPrefixBasedWordEmbedding - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNextKeywordSuggestionToProcess;              //@synthesize numberOfNextKeywordSuggestionToProcess=_numberOfNextKeywordSuggestionToProcess - In the implementation block
@property (assign,nonatomic) BOOL calculateTokenCounts;                                              //@synthesize calculateTokenCounts=_calculateTokenCounts - In the implementation block
+(id)dateFilterWithAttributes:(id)arg1 ;
+(BOOL)tokenIsEligibleForDateParsing:(id)arg1 ;
+(id)dateAttributesFromToken:(id)arg1 ;
+(id)dateFilterByCombiningDateFilter:(id)arg1 withDateFilter:(id)arg2 ;
+(BOOL)enumerateDatedParsesWithParse:(id)arg1 currentTokenIndex:(unsigned long long)arg2 potentialComboAttributes:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
+(id)dateFilterWithAttributes:(id)arg1 andAttributes:(id)arg2 ;
+(id)datedParsesWithBaseParse:(id)arg1 ;
+(void)bootstrap;
-(CFSetRef)_idsOfGroupsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3 ;
-(CFSetRef)_idsOfGroupsMatchingToken:(id)arg1 ;
-(BOOL)recursiveAddToGroupResults:(id)arg1 aggregate:(id)arg2 atIndex:(unsigned long long)arg3 outOf:(unsigned long long)arg4 inGroupArrays:(id)arg5 dateFilter:(id)arg6 ;
-(void)_postProcessPersonGroupsInGroupArrays:(id)arg1 ;
-(id)suggestionWhitelistedScenes;
-(void)bootstrap;
-(id)initWithQueryTokens:(id)arg1 searchText:(id)arg2 useWildcardText:(BOOL)arg3 delegate:(id)arg4 ;
-(void)runWithResultsHandler:(/*^block*/id)arg1 ;
-(void)processDates;
-(void)processWordEmbeddings;
-(id)processParse:(id)arg1 ;
-(void)computeSuggestions;
-(void)enumerateParsesWithMode:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)wordEmbeddingMode;
-(BOOL)usesPrefixBasedWordEmbedding;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(void)setNextKeywordSuggestions:(NSArray *)arg1 ;
-(BOOL)calculateTokenCounts;
-(NSArray *)dedupedGroupResults;
-(void)setDedupedGroupResults:(NSArray *)arg1 ;
-(NSSet *)socialGroupExtendedAssetIds;
-(void)setSocialGroupExtendedAssetIds:(NSSet *)arg1 ;
-(NSSet *)socialGroupExtendedCollectionIds;
-(void)setSocialGroupExtendedCollectionIds:(NSSet *)arg1 ;
-(NSSet *)socialGroupExtendedTripIds;
-(void)setSocialGroupExtendedTripIds:(NSSet *)arg1 ;
-(BOOL)useWildcardText;
-(void)setWordEmbeddingMode:(unsigned long long)arg1 ;
-(void)setUsesPrefixBasedWordEmbedding:(BOOL)arg1 ;
-(void)setCalculateTokenCounts:(BOOL)arg1 ;
-(void)setNumberOfNextKeywordSuggestionToProcess:(unsigned long long)arg1 ;
-(NSDictionary *)substitutions;
-(unsigned long long)numberOfNextKeywordSuggestionToProcess;
-(NSArray *)nextKeywordSuggestions;
-(NSArray *)queryTokens;
-(BOOL)isCanceled;
-(id)description;
-(void)cancel;
-(NSString *)searchText;
@end

