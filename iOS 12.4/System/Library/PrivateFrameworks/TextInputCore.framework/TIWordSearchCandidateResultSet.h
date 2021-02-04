/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSString, NSDictionary;

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying> {

	BOOL _empty;
	NSMutableArray* _mutableCandidates;
	NSMutableDictionary* _mutableCandidateRefsDictionary;
	NSArray* _initiallyHiddenCandidates;
	unsigned long long _selectedHiddenCandidateIndex;
	NSArray* _proactiveCandidates;
	NSArray* _autoconvertedCandidates;
	NSString* _autoconvertedCandidateString;
	NSString* _autoconvertedInputString;
	NSMutableArray* _mutableProactiveTriggers;

}

@property (nonatomic,retain) NSMutableArray * mutableCandidates;                                //@synthesize mutableCandidates=_mutableCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableCandidateRefsDictionary;              //@synthesize mutableCandidateRefsDictionary=_mutableCandidateRefsDictionary - In the implementation block
@property (nonatomic,copy) NSArray * autoconvertedCandidates;                                   //@synthesize autoconvertedCandidates=_autoconvertedCandidates - In the implementation block
@property (nonatomic,retain) NSString * autoconvertedCandidateString;                           //@synthesize autoconvertedCandidateString=_autoconvertedCandidateString - In the implementation block
@property (nonatomic,retain) NSString * autoconvertedInputString;                               //@synthesize autoconvertedInputString=_autoconvertedInputString - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableProactiveTriggers;                       //@synthesize mutableProactiveTriggers=_mutableProactiveTriggers - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,readonly) NSDictionary * candidateRefsDictionary; 
@property (nonatomic,copy) NSArray * initiallyHiddenCandidates;                                 //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedHiddenCandidateIndex;                   //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveTriggers; 
@property (nonatomic,retain) NSArray * proactiveCandidates;                                     //@synthesize proactiveCandidates=_proactiveCandidates - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                         //@synthesize empty=_empty - In the implementation block
+(id)emptySet;
-(void)setEmpty:(BOOL)arg1 ;
-(id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned long long)arg4 ;
-(id)initWithCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 ;
-(NSArray *)proactiveTriggers;
-(NSDictionary *)candidateRefsDictionary;
-(void)addCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 ;
-(void)addSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 isExtension:(BOOL)arg3 deleteCount:(unsigned long long)arg4 cursorMovement:(long long)arg5 annotation:(id)arg6 ;
-(void)insertSyntheticMecabraCandidateWithSurface:(id)arg1 input:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 ;
-(void)addMecabraProactiveCandidate:(void*)arg1 triggerSourceType:(unsigned char)arg2 ;
-(void)addMecabraFacemarkCandidate:(void*)arg1 forInput:(id)arg2 ;
-(void)addSyntheticMecabraProactiveCandidate:(id)arg1 triggerSourceType:(unsigned char)arg2 ;
-(void)insertMecabraCandidate:(id)arg1 mecabraCandidateRef:(void*)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setAutoconvertedMecabraCandidates:(id)arg1 candidateRefsDictionary:(id)arg2 ;
-(void)moveCandidate:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)clearProactiveTriggers;
-(NSMutableArray *)mutableCandidates;
-(void)setMutableCandidates:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)mutableCandidateRefsDictionary;
-(void)setMutableCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setInitiallyHiddenCandidates:(NSArray *)arg1 ;
-(void)setSelectedHiddenCandidateIndex:(unsigned long long)arg1 ;
-(NSArray *)proactiveCandidates;
-(void)setProactiveCandidates:(NSArray *)arg1 ;
-(NSArray *)autoconvertedCandidates;
-(void)setAutoconvertedCandidates:(NSArray *)arg1 ;
-(NSString *)autoconvertedCandidateString;
-(void)setAutoconvertedCandidateString:(NSString *)arg1 ;
-(NSString *)autoconvertedInputString;
-(void)setAutoconvertedInputString:(NSString *)arg1 ;
-(NSMutableArray *)mutableProactiveTriggers;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)candidates;
-(NSArray *)initiallyHiddenCandidates;
-(unsigned long long)selectedHiddenCandidateIndex;
@end
