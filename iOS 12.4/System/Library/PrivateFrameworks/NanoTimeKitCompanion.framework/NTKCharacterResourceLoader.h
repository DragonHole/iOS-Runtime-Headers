/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class CLKDevice, EAGLContext, NSBundle, CLKUIMmapFile, NSMutableDictionary, NSMutableArray;

@interface NTKCharacterResourceLoader : NSObject {

	CLKDevice* _device;
	EAGLContext* _context;
	NSBundle* _bundle;
	unsigned long long _clients;
	CLKUIMmapFile* _commonBankLatn;
	CLKUIMmapFile* _commonBankArab;
	CLKUIMmapFile* _commonBankDeva;
	CLKUIMmapFile* _minnieBank;
	CLKUIMmapFile* _mickeyBank;
	NTKCharacterPrograms _programs;
	NSMutableDictionary* _mapping;
	NSMutableArray* _array;
	NSMutableArray* _arrayByLocale[3];

}

@property (nonatomic,readonly) EAGLContext * context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstanceForDevice:(id)arg1 ;
+(void)_deallocInstanceForDevice:(id)arg1 ;
-(void)localeChanged;
-(id)initForDevice:(id)arg1 ;
-(void)_asyncDeallocInstance;
-(unsigned)programUniformLocation:(unsigned long long)arg1 uniform:(int)arg2 ;
-(id)textureWithName:(id)arg1 ;
-(id)textureWithName:(id)arg1 prefix:(id)arg2 ;
-(void)bindProgram:(unsigned long long)arg1 ;
-(void)bindTexture:(id)arg1 ;
-(void)_loadPrograms;
-(void)_loadTextures;
-(id)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(BOOL)arg3 ;
-(void)prime;
-(void)addClient;
-(void)removeClient;
-(void)dealloc;
-(EAGLContext *)context;
@end

