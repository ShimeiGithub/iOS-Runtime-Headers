/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreBrowseContentItem : MPUModelObject {
    MPUModelAlbum *_album;
    MPUModelCurator *_curator;
    int _detailedItemType;
    unsigned int _itemType;
    MPUModelMusicVideo *_musicVideo;
    MPUModelPlaylist *_playlist;
    MPUModelRadioStation *_radioStation;
    MPUModelSong *_song;
}

@property (nonatomic, retain) MPUModelAlbum *album;
@property (nonatomic, retain) MPUModelCurator *curator;
@property (nonatomic) int detailedItemType;
@property (nonatomic) unsigned int itemType;
@property (nonatomic, retain) MPUModelMusicVideo *musicVideo;
@property (nonatomic, retain) MPUModelPlaylist *playlist;
@property (nonatomic, retain) MPUModelRadioStation *radioStation;
@property (nonatomic, retain) MPUModelSong *song;

+ (id)__album__KEY;
+ (id)__curator__KEY;
+ (id)__detailedItemType__KEY;
+ (id)__itemType__KEY;
+ (id)__musicVideo__KEY;
+ (id)__playlist__KEY;
+ (id)__radioStation__KEY;
+ (id)__song__KEY;

- (void).cxx_destruct;
- (id)album;
- (id)curator;
- (id)descriptionWithType:(unsigned int)arg1;
- (int)detailedItemType;
- (unsigned int)itemType;
- (id)musicVideo;
- (id)playlist;
- (id)radioStation;
- (void)setAlbum:(id)arg1;
- (void)setCurator:(id)arg1;
- (void)setDetailedItemType:(int)arg1;
- (void)setItemType:(unsigned int)arg1;
- (void)setMusicVideo:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setSong:(id)arg1;
- (id)song;

@end
