/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface USEventBatch : NSObject {

	NSMutableArray* _itemsArray;
	unsigned long long _batchSize;

}

@property (getter=isFull,nonatomic,readonly) BOOL full; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemsArray;               //@synthesize itemsArray=_itemsArray - In the implementation block
-(id)initWithBatchSize:(unsigned long long)arg1 ;
-(id)dictionaryRepresentationWithBatchParameters:(id)arg1 ;
-(NSMutableArray *)itemsArray;
-(void)addEventsFromArray:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(BOOL)isFull;
-(unsigned long long)batchSize;
-(NSArray *)items;
@end
